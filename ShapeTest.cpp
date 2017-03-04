// ShapeTest.cpp : 定义控制台应用程序的入口点。
//vs2012编译环境
//duansuijun

#include "stdafx.h"
#include <iostream>
#include<string>
using namespace std;
#define PI 3.1415926


struct Triangle{
	int id;
	float area;
	int x1;
	int y1;
	int x2;
	int y2;
	int x3;
	int y3;
};

struct Rectangle{
	int id;
	float area;
	int x;
	int y;
	int w;
	int h;
};
struct Circle{
	int id;
	float area;
	int x;
	int y;
	int r;
};
int main()
{
	int num=0;
	int num_tri=0;
	int num_rect=0;
	int num_cir=0;
	Triangle triarray[10]={0};
	Rectangle rectarray[10]={0};
	Circle cirarray[10]={0};
	while(1)
	{
    string str1="";
	string str2="";
	string str3="";
    int x1;
	int x2;
	int x3;
	int x4;
	int x5;
	int x6;
	
	
	
	cout<<"please input cmds:"<<endl;
	cin>>str1;
	if(str1.compare("create")==0)
	{
		num++;
		cin>>str2;
		if(str2.compare("triangle")==0)
		{
			cin>>x1>>x2>>x3>>x4>>x5>>x6;
			triarray[num_tri].id = num;
			triarray[num_tri].area = (x1*x4+x2*x5+x3*x6-x1*x6-x2*x3-x4*x5)/2;
			triarray[num_tri].x1 = x1;
			triarray[num_tri].y1 = x2;
			triarray[num_tri].x2 = x3;
			triarray[num_tri].y2 = x4;
			triarray[num_tri].x3 = x5;
	        triarray[num_tri].y3 = x6;
			cout<<triarray[num_tri].id<<endl;
			num_tri++;
		}
		if(str2.compare("rectangle")==0)
		{
			cin>>x1>>x2>>x3>>x4;
			rectarray[num_rect].id = num;
			rectarray[num_rect].area = x3*x4;
			rectarray[num_rect].x = x1;
			rectarray[num_rect].y = x2;
			rectarray[num_rect].w = x3;
			rectarray[num_rect].h = x4;
			cout<<rectarray[num_rect].id<<endl;
			num_rect++;
		}
		if(str2.compare("circle")==0)
		{
			cin>>x1>>x2>>x3;
			cirarray[num_cir].id = num;
			cirarray[num_cir].area = PI*x3*x3;
			cirarray[num_cir].x = x1;
			cirarray[num_cir].y = x2;
			cirarray[num_cir].r = x3;
			cout<<cirarray[num_cir].id<<endl;
			num_cir++;
		}
	}
	if(str1.compare("list")==0)
	{
		cin>>str2>>str3;
		if(str3.compare("all")==0)
	    {
			int j;
		    for(j=0;j<num_tri;j++)
			{
				cout<<triarray[j].id<<" "<<"triangle"<<" "<<triarray[j].x1<<triarray[j].y1<<triarray[j].x2<<triarray[j].y2<<triarray[j].x3<<triarray[j].y3<<endl;
			}
			for(j=0;j<num_rect;j++)
			{
				cout<<rectarray[j].id<<" "<<"rectangle"<<" "<<rectarray[j].x<<rectarray[j].y<<rectarray[j].w<<rectarray[j].h<<endl;
			}
			for(j=0;j<num_cir;j++)
			{
				cout<<cirarray[j].id<<" "<<"circle"<<" "<<cirarray[j].x<<cirarray[j].y<<cirarray[j].r<<endl;
			}

	    }
		if(str3.compare("triangle")==0)
	    {
		    int j;
		    for(j=0;j<num_tri;j++)
			{
				cout<<triarray[j].id<<" "<<"triangle"<<" "<<triarray[j].x1<<triarray[j].y1<<triarray[j].x2<<triarray[j].y2<<triarray[j].x3<<triarray[j].y3<<endl;
			}
	    }
		if(str3.compare("rectangle")==0)
	    {
			int j;
		   for(j=0;j<num_rect;j++)
			{
				cout<<rectarray[j].id<<" "<<"rectangle"<<" "<<rectarray[j].x<<rectarray[j].y<<rectarray[j].w<<rectarray[j].h<<endl;
			}
	    }
		if(str3.compare("circle")==0)
	    {
			int j;
		    for(j=0;j<num_cir;j++)
			{
				cout<<cirarray[j].id<<" "<<"circle"<<" "<<cirarray[j].x<<cirarray[j].y<<cirarray[j].r<<endl;
			}
	    }
	}
	if(str1.compare("show")==0)
	{
		cin>>str2>>x1;
		int k,idtemp;
		bool hasfind=false;
		for(k=0;k<num_tri && !hasfind;k++)
		{
			if(triarray[k].id == x1)
			{
				cout<<triarray[k].area<<endl;
				hasfind = true;
			}
		}
		for(k=0;k<num_rect && !hasfind;k++)
		{
			if(rectarray[k].id == x1)
			{
				cout<<rectarray[k].area<<endl;
				hasfind = true;
			}
		}
		for(k=0;k<num_cir && !hasfind;k++)
		{
			if(cirarray[k].id == x1)
			{
				cout<<cirarray[k].area<<endl;
				hasfind = true;
			}
		}
	}
	}
   

    system("pause");
    return 0;
}

