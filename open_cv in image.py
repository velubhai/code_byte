from PIL import Image
import cv2
import matplotlib.pyplot as plt

img = cv2.imread('picture2.jpg')

##img = cv2.cvtcolor(img,cv2.COLOR_BGR2RGB)

plt.imshow(img)
img.save('pixel.picture2.jpg')
