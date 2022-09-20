#include <iostream>
#include <cmath>
using namespace std;

// bx + c = 0
void Pt_bac1(float b, float c) 
{

	if ( b == 0 ) {
		if ( c == 0 ) cout << "Phuong trinh vo so nghiem";
		else cout << "Phuong trih vo nghiem";
	} else cout << "Nghiem cua pt la: " << -c / b;
}

// ax^2 + bx + c = 0
void Pt_bac2(float a, float b, float c)
{
	if ( a == 0 ) Pt_bac1(b, c);
	else {
		const float delta = b * b - 4 * a * c;
		if ( delta < 0 ) cout << "Vo nghiem";
		else if ( delta == 0 ) cout << "Nghiem cua pt la: " << -b / (2 * a);
		else {
			cout << "Nghiem thu nhat cua pt la: " <<  (-b - sqrt(delta)) / ( 2 * a ) << endl;
			cout << "Nghiem thu nhat cua pt la: " <<  (-b + sqrt(delta)) / ( 2 * a ) << endl;
		}
		
	}	
}

int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	Pt_bac2(a, b, c);

	return 0;

}
