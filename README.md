# SET Card Recognition
Create a mobile app that takes a picture of [SET®](https://www.setgame.com/) cards and tells the user if a set exists in the given cards.

Using inspiration from Anais Dotois, [Anaisdg](https://github.com/Anaisdg), and Tom White, [tomwhite](https://github.com/tomwhite), we want to explore image recognition strategies and deep learning models to accurately identify SETs in a group of cards.

 ## Plan
 
 These are the main tasks we want to accomplish for developing our app:
 
 **1. Collect the data.**
 
 Goal is to get at least 100 images for each card type. In addition, we will add images from Anais Dotis' and Tom White's githubs to supplement our data and use for testing. 
 
 **2. Start with three card types and create a neural network classifier.** 
 <img src="https://github.com/rushmie/SETCardRecognition/blob/master/check_mark.png" width="30" height="30">
 
 
 Goal is to learn how to do image processing and create a convolutional neural network (CNN) that can classify three cards with an accuracy of at least 90%. 
 
 **3. Expand to all 81 card types and develop a neural network classifier.**
 
 Goal is to first apply Tom White's CNN model to our data to see if we can also achieve 99% accuracy. We may also explore other model  architectures that include pre-trained models like VGG19. 
 
 **4. Create an image detection model that can detect cards in an image and connects to our neural network classifier.**
 
 **5. Write up code for SET game rules.**
 
 **6. Develop the app using Android Studio.**
 
 **7. Logo design.**
 
 ## Software
 
 Python 3.7.3
 OpenCV (version)  
 Tensorflow (version)  
 PyTorch (version)  
 Android Studio (version) 

## Data

There are 81 distinct SET cards. 

The attributes of these cards can be divided into 4 categories:

 * Shapes: diamond (D), oval (O), squiggle (S)
 * Color: red (R), green (G), purple (P)
 * Pattern: full (F), lined (L), empty (E)
 * Number: one (1), two (2), three (3)
 
 The naming scheme we used to capture these 4 attributes is the following:
 Number Shape Color Pattern.  
 
 For example, the following image would be __1ORF__, which is short for __one oval red full__.
 
  <img src="https://github.com/rushmie/SETCardRecognition/blob/master/data/training_data/1ORF/IMG_20190515_123747464.jpg" width="100" height="100">
 
 ### Creating the dataset for our neural network classifier
 
 We took at least 100 photos of each SET card with a variety of backgrounds, lighting conditions, rotations, and angles using two different phones.
 
 Our data can be found in *data/training_data*.
 
 ## Creating Neural Network Classifier
 
 ### CNN for 3 Classes
 
We first wanted to get practice creating convolutional neural networks and processing images. Using PyTorch, we were able to get 93% accuracy on our test set with our model. The data that we used can be found in *data/practice_set*.

Here's our analysis:   
http://htmlpreview.github.io/?https://github.com/rushmie/SETCardRecognition/blob/master/jupyter_notebooks/CNN_practice_3_classes.html
 
 
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
 

