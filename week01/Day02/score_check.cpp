#include <iostream>
#include <string>
using namespace std;


int main() {
	int a=0;
	
	//���_�n�D�ϥΪ̿�J���Z�A���� a==-1 
	while(true)
	{
    cout<<"\n�п�J�ϥΪ̪����Z :(��J-1���}) "<<endl;
	cin>>a;
	
	//���}�{�� 
	if(a==-1){
		cout<<"�{�������A���¨ϥ�!"<<endl; 
		break;		
	}
	
	//�ˬd���Z�O�_�X�k 
	if (a > 100 || a < 0) {
    cout << "�L�Ħ��Z�A�Э��s��J�C\n\n" << endl;
    continue;
}

	//���� 
	if(a>=90)
		cout<<"�u��"<<endl;
	else if(a>=80)
		cout<<"�ҵ�"<<endl; 
	else if(a>=70)
		cout<<"�A��"<<endl; 
	else if(a>=60)
		cout<<"����"<<endl; 
	else 
		cout<<"���ή�"<<endl;
	}
  		
			 
    return 0;
}
