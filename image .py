from PIL import Image

 
img = Image.open("picture2.jpg")

img.save("saved_picture2.jpg")

width, height = img.size

img2 = img.resize((int(width/2), int(height/2)))

img2.save("resize_picture2.jpg")

img = img.rotate(180)
img2.save("rotate_picture2.jpg")


area = (0, 0, width/2, height/2) 
img3 = img.crop(area)
img2.save("crop_picture2.jpg")


img5= Image.open("picture2.jpg")

img6 = Image.open("picture.jpg")
img6.paste(img2, (50, 50))

img6.save("pasted_picture2.jpg")

print(img.histogram())

img.save("histogram_picture2.jpg")
          
img.thumbnail((200, 200))  
img.save("thumb.jpg")

img[50,50,1] = 0
plt.inshow(img)

print(img.size)

   
