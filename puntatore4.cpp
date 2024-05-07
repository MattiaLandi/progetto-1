using namespace std;

float calcolo(float x, float *area, float *circo,float *volume);
float calcolo(float x, float *area, float *circo,float *volume)
{
*area=(pow(x,2))*3.14;
*circo=x*(2*3.14);
*volume=((4/3)*3.14)*pow(x,3);
return *area, *circo, *volume;
}
int main(){
    
    ofstream file("output.txt");
    file.is_open();
    float r;
    float area;
    float circo;
    float volume;
    cin>>r;
    cout<<"area"<<area<<endl;
    cout<<"circo"<<circo<<endl;
    cout<<"volume"<<volume<<endl;
    cout<<"raggio circo"<<r<<endl;
    calcolo(r, &area, &circo, &volume);
    file<<"area"<<area<<endl;
    file<<"circo"<<circo<<endl;
    file<<"volume"<<volume<<endl;
    file.close();
}
