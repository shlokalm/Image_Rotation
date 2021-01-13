# Image Rotation (as per the angle given by user) in C++ using OpenCV 
 OpenCV (Open Source Computer Vision) is an open-source library that includes several hundreds of computer vision algorithms.   
 The project is related to image rotation. We read the user input for rotation angle, and then rotate the matrix accordingly. 
# Assumptions 
*	You have OpenCV version 3 or greater on your machine
*	You have a C++ 11/14 compiler
*	You have the CMake build system
# Author
 Shlok Bisht – Graphic Era Deemed to be University, Dehradun, Uttarakhand, India
# Program Parameters:
*	image: input image
*	rot: output image (having same type as input image)
*	imrotate: a user defined function that takes an image and returns the rotated image.
*	imread(filename,frmt): reads a greyscale or color image from the file specified by the string filename, where the string frmt specifies the format of the file.
*	imshow: displays the image
*	waitkey: displays the output until any key is press by the user
# Output
| Original: |	Angle=180 |	Angle=45 |
| :---: | :---: | :---: |
| ![alt text](/img.jpg) | ![alt text]( /output/180.png) | ![alt text](/output/45.png)|
