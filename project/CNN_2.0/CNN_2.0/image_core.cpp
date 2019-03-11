
#include "image_core.h"

void cnnclassify(
	hls::Array2D<28,28,fix32_16> 	&input,
	int 							&label,
	float 							&score
	)
{
	// ����CNN�ṹ
	hls::_inputlayer<28,28,fix32_16> inputlayer; // �����
	hls::_convlayer<1,6,28,28,5,fix32_16> convlayer1; // ���1��
	hls::_poollayer<6,24,24,2,fix32_16> poollayer1; // �ػ�1��
	hls::_convlayer<6,12,12,12,5,fix32_16> convlayer2; // ���2��
	hls::_poollayer<12,8,8,2,fix32_16> poollayer2; // �ػ�2��
	hls::_cconlayer<12,10,4,4,fix32_16> cconlayer; // ȫ���Ӳ�
	hls::_outputlayer<10,fix32_16> outputlayer; // �����

	// CNN�ṹ��ֵ
	hls::ConvLayer_Init(k1, b1, convlayer1);
	hls::ConvLayer_Init(k2, b2, convlayer2);
	hls::CconLayer_Init(K, B, cconlayer);

	// CNN����
	hls::InputLayer(input, inputlayer);
	hls::ConvLayer(inputlayer.output, convlayer1);
	hls::PoolLayer(convlayer1.output, poollayer1);
	hls::ConvLayer(poollayer1.output, convlayer2);
	hls::PoolLayer(convlayer2.output, poollayer2);
	hls::CconLayer(poollayer2.output, cconlayer);
	hls::OutputLayer(cconlayer.output, outputlayer);

	label = outputlayer.label;
	score = (float)outputlayer.score;
}

void CNN_Core(
	AXIS8 	&src_axis,
	int 	rows,
	int 	cols,
	int 	&label,
	float 	&score
	)
{
#pragma HLS DATAFLOW

#pragma HLS INTERFACE axis register both port=src_axis
#pragma HLS INTERFACE s_axilite port=rows bundle=ctrl
#pragma HLS INTERFACE s_axilite port=cols bundle=ctrl
#pragma HLS INTERFACE s_axilite port=label bundle=ctrl
#pragma HLS INTERFACE s_axilite port=score bundle=ctrl
#pragma HLS INTERFACE s_axilite port=return bundle=ctrl

	hls::Mat<MAX_HEIGHT,MAX_WIDTH,HLS_8UC1> src0(rows, cols);
	hls::Mat<28,28,HLS_8UC1> src1(28, 28);
	hls::Array2D<28,28,fix32_16> input;

	hls::AXIvideo2Mat(src_axis, src0); // axisתmat����
	hls::Resize(src0, src1); // ����
	hls::Mat2Array2D(src1, input); // matתarray2d

	cnnclassify(input, label, score);
}

