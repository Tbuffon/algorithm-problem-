/*
�Ӽ�������һ���ַ�������С��1000��ͳ�����е��ʵĸ������������Կո�ָ����ҿո��������Ƕ����
����һ�о��ӣ����пո��Ӣ����ĸ���ɡ�
�����ʽ��
����ֻ��һ�о��ӡ����пո��Ӣ����ĸ���ɡ����纬�ж��Ż����������ţ������һ��if���ɣ����������������������֮�䣬��if��ͳ�ƶ��ŵ����������ʱ���ϼ��ɣ�Ĭ�ϲ�������������֮��ֻ����һ�����ʵ�����Ͷ��ŵ������ֵ��������

�����ʽ��
���ʵĸ���
����������
To be or not to be        This is a question
���������
10
*/

#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char a[1001];
	cin.getline(a,1001);
	int len = strlen(a);
	int count = 0;
	
	for (int i = 0; i < len; i++){
//		cout<<a[i]<<endl;
		while(a[i]>='a'&&a[i]<='z' || a[i] >= 'A'&&a[i]<='Z'){
			i++;
		}
		count++;
		while(a[i] == ' '){
			i++;
		}
	}
	
	cout<< count <<endl;
	
	return 0;
}
