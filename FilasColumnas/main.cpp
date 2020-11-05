#include <opencv2/opencv.hpp>
#include<iostream>

// NIVEL DE GRIS EN LA COORDENADA (511,511) 

int main() {
    cv :: Mat imagen = cv :: imread("lenna.jpg", cv :: IMREAD_GRAYSCALE); //Guarda la imagen en la matriz en grises

    const std::string window_name{"Lenna"};

    cv :: namedWindow(window_name);
    cv :: imshow(window_name, imagen);

    std ::cout << "La imagen tiene " << imagen.rows << " pixeles de alto y " << imagen.cols << " pixeles de ancho" << std :: endl;
    uchar pixel = imagen.at<uchar>(511, 511);//Con la func "at" se pide qué hay en ese pixel, y se pide el formato
    std :: cout << "En la coord. 511 x 511 el nivel de gris es " <<(int)pixel<< std :: endl;
    cv :: waitKey(0);

    return 1;
}