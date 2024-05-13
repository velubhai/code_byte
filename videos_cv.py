import cv2 as cv
capture = cv.VideoCapture('v/videos.mp4')
while True:
    isTrue,frame = capture.read()
    
    cv.imshow('video',frame)
    
    if cv.waitKey(30) & 0xFF==ord('d'):
           break
capture.release()
cv.destroyAllWindows()
