 #include<iostream>
 using namespace std;

int lenght(char input[]){
    int count = 0;
    for(int i=0;input[i]!='\0';i++){
        count++;
    }
    return count;
}
void reverse(char input[]){
    int s=0;
    int e=lenght(input)-1;
    while(s<e){
        swap(input[s],input[e]);
        s++;
        e--;
    }
}

int main(){
    char name[100];
    cout<<"Enter your name:"<<endl;
    cin.getline(name,100);
    cout<<"your name:"<<name<<endl;
    reverse(name);
    cout<<"reversed string is "<<name<<endl;
    return 0;
}