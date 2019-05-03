#include <iostream>
#include <vector>

/*Imagine we have an image. We'll represent this image as a simple 2D array where every pixel is a 1 or a 0. The image you get is known to have a single rectangle of 0s on a background of 1s.*/

//Write a function that takes in the image and returns the coordinates of the rectange of 0's.
//Either top left and bottom right, or top left width and height

//x:3, y:2 Width: 3, height: 2
//2, 3 3,5 -- row, column of the top-left and bottom-right corners
//3m2m5m3 -- x,y of the top-left and bottom-right corners (as long as //you stay consistent, either format is fine.)

using namespace std;
vector<int> FindRectangle(vector<vector<int>> image)
{
	bool flagTopLeft = false;
	int topLeftX, topLeftY, bottomRightX, bottomRightY;
	//Use below for debugging purposes only
	//cout << image.size();
	vector<int> myCoords;
	for (int i = 0; i < image.size(); i++)
	{
		for (int j = 0; j < image[0].size(); j++)
		{
			//Use below for debugging purposes only
			//cout << i << endl;
			//cout << j << endl;

			if (image[i][j] == 0)
			{
				if (flagTopLeft == false)
				{
					topLeftX = j+1;
					topLeftY = i+1;
					myCoords.push_back(topLeftX);
					myCoords.push_back(topLeftY);
				}
				bottomRightX = j+1;
				bottomRightY = i+1;
				myCoords.push_back(bottomRightX);
				myCoords.push_back(bottomRightY);
				flagTopLeft = true;
			}
		}
	}
	cout << topLeftX << topLeftY << endl;
	cout << bottomRightX << bottomRightY << endl;
	return  myCoords;
}

int main()
{
	vector<vector<int>> image1 = {
		{1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1},
		{1,1,1,0,0,0,1},
		{1,1,1,0,0,0,1},
		{1,1,1,1,1,1,1},
	};
	vector<vector<int>> image2 = {
		{1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1},
		{1,1,1,1,1,1,0},
	};
	vector<vector<int>> image3 = {
		{1,1,1,1,1,1,1},
		{1,1,0,0,1,1,1},
		{1,1,0,0,1,1,1},
		{1,1,0,0,1,1,1},
		{1,1,1,1,1,1,1},
	};
	vector<vector<int>> image4 = {
		{0},
	};
	FindRectangle(image3);
	system("PAUSE");

}
