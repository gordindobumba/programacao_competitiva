#include <bits/stdc++.h>
using namespace std;

#define EPS 1e-9
bool equal(double x, double y){
    return abs(x - y) < EPS;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	double x1, y1, x2, y2, x3, y3, x4, y4;
	while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4){
		double point_x, point_y;
		if(equal(x2, x3) && equal(y2, y3)){
			point_x = x1 + x4 - x2;
			point_y = y1 + y4 - y2;
		}
		else if(equal(x1, x3) && equal(y1, y3)){
			point_x = x2 + x4 - x1;
			point_y = y2 + y4 - y1;
		}
		else if(equal(x2, x4) && equal(y2, y4)){
			point_x = x3 + x1 - x2;
			point_y = y3 + y1 - y2;
		}
		else{
			point_x = x2 + x3 - x1;
			point_y = y2 + y3 - y1;
		}

		cout << fixed << setprecision(3) << point_x << " " << point_y << "\n";
	}
    return 0;
}