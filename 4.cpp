int binary_search(Sequence s,int key){//二分查找，有序顺序表和关键字
	int left=0,right=s.length;
	while(left<=right){
                  int mid=(left+right)2;//每次循环改变mid值
	  if(key==s.[mid]) return mid;
	  else if(key<s.[mid])
	        right=mid-1;//查找关键小于mid，改变查找区间
	  else
	        left=mid+1; //查找关键大于mid，改变查找区间
	}
  return //查找失败

}
