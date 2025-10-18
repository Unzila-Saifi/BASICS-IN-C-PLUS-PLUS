
// reads a line of text and counts all occurrences of aparticular word.
#include<iostream>
using namespace std;

class text{
	char text[500], word[50],temp[50];
	int i=0,k=0,j=0 ,count=0;
	public:
	void inputtext(){
		cout<<"Enter a Line of Text :"<<endl;
		cin.getline(text,500);
	}
	void inputword(){
		cout<<"Enter a word to count:"<<endl;
		cin.getline(word,50);
	}
   void check(){
          while(true){
          	if(text[i]!=' '&& text[i]!='\0'){
          		temp[j++]=text[i];
			  }
			else{
				temp[j]='\0';
				bool match = true;
			for(k=0;word[k]!='\0'||temp[k]!='\0';k++){
				if(word[k]!=temp[k]){
					match=false;
					break;
				  }
		    	}
				if(match){
					count++;
				}
				j=0;	
			}
			if(text[i]=='\0')
			break;
			i++;
		  }	
    }
    void print(){
    	cout<<"The Word " <<word<< " occured " <<count<< " times"<<endl;
		}
};

int main(){
	text countWord;
	countWord.inputtext();
	countWord.inputword();
	countWord.check();
	countWord.print();	
}
