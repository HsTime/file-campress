#include"huffman.h"
#include"Filecampress.h"
int main()
{
	/*string filename = "E:\\Campress\\DSC_0004.JPG";*/
	string filename = "E:\\Campress\\1.txt";
	/*string filename = "E:\\Campress\\campress.txt";*/
	//string filename = "E:\\Campress\\2017�ﾶ�˶��������20170410.doc";
	/*string filename = "E:\\Campress\\MC���� - ��������.mp3";*/
	FileCompress fc;
	fc.CompressHuffCode(filename.c_str());

	/*string unfilename = "E:\\Campress\\DSC_0004.huff";*/
	string unfilename = "E:\\Campress\\1.huff";
	/*string unfilename = "E:\\Campress\\campress.huff";*/
	/*string unfilename = "E:\\Campress\\2017�ﾶ�˶��������20170410.huff";*/
	//string unfilename = "E:\\Campress\\MC���� - ��������.huff";
	FileCompress unfc;
	unfc.UnCompressHuffCode(unfilename.c_str());
	return 0;
}