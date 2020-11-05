#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

void imprimir(Mat m);
void salypimienta(Mat im, int n);
int main() {
    Mat imagen = imread("lenna.jpg", IMREAD_GRAYSCALE);
    salypimienta(imagen, 50000);
    imshow("Lenna", imagen);

    cout << "La imagen mide " << imagen.rows << " x " << imagen.cols << " pixeles" << endl;
    uchar pixel = imagen.at<uchar>(19, 19);
    cout << "En la coord. 19 x 19 el nivel de gris es " << (int)pixel << endl; // acceder a un pixel

    imprimir(imagen);
    waitKey(0);
    return 1;
}
void imprimir(Mat m) {
    int colores[256];
    for (int i = 0; i < 256; i++){
        colores[i] = 0;
    }
    for (int j = 0; j < m.rows; j++){
        for (int i = 0; i < m.cols; i++){
            int pixel = m.at<uchar>(j, i);
            /*cout << (int)m.at<uchar>(j, i) << "\t";*/
            colores[pixel]++;
        }

    }
    //Impresion de cantidad de colores
    cout << "color = Cantidad" << endl;
    for (int i = 0; i < 256; i++){
        if (colores[i]>0){
            cout << i << " = " << colores[i] << endl;
         }
    }
}
void salypimienta(Mat im, int n) {
    int i, j;
    for (int k = 0; k < n; k++){
        i = rand() % im.cols;
        j = rand() % im.rows;
        int a = rand() % 2;
        cout << a << endl;
        if (a==1){
            im.at<uchar>(j, i) = 255;
        }
        else{
            im.at<uchar>(j, i) = 0;
        }
    }
}