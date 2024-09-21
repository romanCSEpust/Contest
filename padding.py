import cv2

# Read an image from file
image = cv2.imread('roman.jpg')
new_height = 500
new_width = 400
resized_image = cv2.resize(image, (new_width, new_height))

# Specify the size of the border (top, bottom, left, right)
top_border = 50
bottom_border = 20
left_border = 30
right_border = 30

# Define the color of the border (in this case, white)
border_color = [128, 128, 128]  # [B, G, R]

# Add the border to the image
bordered_image = cv2.copyMakeBorder(resized_image, top_border, bottom_border, left_border, right_border, cv2.BORDER_CONSTANT, value=border_color)

# Display the bordered image
cv2.imshow('Bordered Image', bordered_image)
cv2.waitKey(0)
cv2.destroyAllWindows()
cv2.imwrite('Image/bordered_image.jpg',bordered_image)