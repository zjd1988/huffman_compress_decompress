// Huffman.h
//
//////////////////////////////////////////////////////////////////////


#if !defined(__COMPRESS_H__)
#define __COMPRESS_H__
#define BYTE unsigned char
#define DWORD int

bool CompressHuffman(BYTE *pSrc, int nSrcLen, BYTE *pDes, int *nDesLen);
bool DecompressHuffman(BYTE *pSrc, int nSrcLen, BYTE *pDes, int *nDesLen);

#endif //__COMPRESS_H__