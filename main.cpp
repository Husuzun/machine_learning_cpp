#include "ETL/ETL.h"

#include <iostream>
#include <string>
#include <Eigen/Dense>
#include <boost/algorithm/string.hpp>
#include <vector>
#include <opencv2/opencv.hpp>

int main(int argc, char *argv[]) {
    ETL etl(argv[1], argv[2], argv[3]);

    std::vector<std::vector<std::string>> dataset = etl.readCSV();

    int rows = dataset.size();
    int cols = dataset[0].size();
    Eigen::MatrixXd dataMat = etl.CSVtoEigen(dataset, rows, cols);

    std::cout<<dataMat<<std::endl;
    return EXIT_SUCCESS;
}