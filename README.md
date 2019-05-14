# SET Card Recognition
Create a mobile app that takes a picture of [SET®](https://www.setgame.com/) cards and tells the user if a set exists in the given cards.

Using inspiration from Anais Dotois, [Anaisdg](https://github.com/Anaisdg), and Tom White, [tomwhite](https://github.com/tomwhite), we want to explore image recognition strategies and deep learning models to accurately identify SETs in a group of cards.

## Data

There are 81 distinct SET cards. 

The attributes of these cards can be divided into 4 categories:

 * Shapes: diamond (D), oval (O), squiggle (S)
 * Color: red (R), green (G), purple (P)
 * Pattern: full (F), lined (L), empty (E)
 * Number: one (1), two (2), three (3)
 
 The naming scheme we used to capture these 4 attributes is the following:
 Number Shape Color Pattern  
 For example, the following image would be *name*, which is short for *long name* 
 *****add image
 
 ### Creating the dataset for our neural network classifier
 
 We took around 100 photos of each SET card with a variety of backgrounds, lighting conditions, rotations, and angles using two different phones.
 
 Our data can be found in *training_data* in two folders, *pre-processed* and *processed*.   
 The original images of our cards are stored in *pre-processed*.  
 We resized our images to *size by size* pixels using *OpenCV* and placed them in *processed*.
 
 ## Software
 
 Python (version)  
 OpenCV (version)  
 Tensorflow (version)  
 PyTorch (version)  
 Android Studio (version) 
 
 ## File Directory
  
 ## Stages
 
 **1. Collect the data.**
 
 Goal is to get at least 100 images for each card type. In addition, we will add images from Anais Dotis's and Tom White's githubs to supplement our data. 
 
 **2. Start with three card types and create a neural network classifier.**
 
 Goal is to learn how to do image processing and create a convolutional neural network that can accurately classify three cards. 
 
 **3. Expand to all 81 card types and develop a neural network classifier.**
 
 **4. Create an image detection model that can detect cards in an image and connects to our neural network classifier.**
 
 **5. Write up code for SET game rules.**
 
 **6. Develop the app using Android Studio.**
 
 ## Team
 
 Rushmie Kulkarni  
 Jenny Li  
 Sara Jones  
 
 ## Acknowledgements
Anais Dotis  
https://github.com/Anaisdg/OpenCV  
Fantastic Medium article of her project:   
https://medium.com/@dganais/ready-set-image-recognition-720be22d7051

Tom White  
https://github.com/tomwhite/set-game    
Great blog post of his project:   
https://blog.cloudera.com/blog/2017/10/understanding-how-deep-learning-learns-to-play-set/
 

