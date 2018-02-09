/*
 * sequential_search.cpp
 *
 *  Created on: 2018年2月9日
 *      Author: wenleisong
 */
#include "sequential_search.h"

//顺序查找，输入有序数组
//左边位置，右边位置，待查找数据
//输出数据所在位置，如果找不到返回-1
//缺点：1.只能输入整数；2，有可能越界 3；效率低
int sequential_search(int a[],int l ,int r,int v){
	for (int i = l; i<=r; i++){
		if(v==a[i]){
			return i;
		}
	}
	return -1;
}


