#include <opencv2/opencv.hpp>
using namespace cv;

int main() {
    VideoCapture cap(0); // Open the default camera

    if (!cap.isOpened()) {
        std::cerr << "Error: Could not open camera." << std::endl;
        return -1;
    }

    Mat frame;
    while (true) {
        cap >> frame; // Capture a new frame

        if (frame.empty()) break; // End of video stream

        imshow("Webcam Feed", frame);

        if (waitKey(30) >= 0) break; // Exit loop on key press
    }

    return 0;
}
