#include"huffman.h"
#include"Filecampress.h"
#include<time.h>
int main()
{
	clock_t start,finish;
	double cptime;
	/*string filename = "E:\\Campress\\DSC_0004.JPG";*/
	string filename = "E:\\Campress\\1.txt";
	/*string filename = "E:\\Campress\\campress.txt";*/
	//string filename = "E:\\Campress\\2017�ﾶ�˶��������20170410.doc";
	/*string filename = "E:\\Campress\\MC���� - ��������.mp3";*/
	FileCompress fc;
	start = clock();
	fc.CompressHuffCode(filename.c_str());

	/*string unfilename = "E:\\Campress\\DSC_0004.huff";*/
	string unfilename = "E:\\Campress\\1.huff";
	/*string unfilename = "E:\\Campress\\campress.huff";*/
	/*string unfilename = "E:\\Campress\\2017�ﾶ�˶��������20170410.huff";*/
	//string unfilename = "E:\\Campress\\MC���� - ��������.huff";
	FileCompress unfc;
	unfc.UnCompressHuffCode(unfilename.c_str());
	finish = clock();
	cptime = (double)(finish - start) / CLOCKS_PER_SEC;
	cout << "ѹ����ѹ��ʱ��Ϊ��" << cptime << "��" << endl;
	return 0;
}