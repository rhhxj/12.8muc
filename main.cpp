//
//  main.cpp
//  12.8muc
//
//  Created by 20141105047 on 15/12/9.
//  Copyright (c) 2015年 20141105047. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int arr[3];
    cout << "输入三个数值:\n";
    for(int i = 0; i < 3;i++)
    {
        cin >> arr[i];
    }
    cout << "这三个数的反向输出顺序为:\n";
    for(int j = 2; j >= 0; j--)
    {
        cout << arr[j] << "  ";
    }
    cout << endl;
    return 0;
}