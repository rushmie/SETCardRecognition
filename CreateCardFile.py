# Python script randomly generates SET cards and 
# populates cards.txt with SET cards in the format:
# shade, color, shape, number

import random

def main():
	f = open("cards.txt", "w")
	shades = ["stripe", "solid", "empty"]
	colors = ["red", "purple", "green"]
	#numbers = 1, 2, 3
	shapes = ["diamond", "squiggle", "oval"]
	
	for i in range(12):
		shade = random.randint(0, 2)
		#print(shade)
		color = random.randint(0, 2)
		num = random.randint(1, 3)
		shape = random.randint(0, 2)
		f.write(shades[shade]+","+colors[color]+","+str(num)+","+shapes[shape]+"\n")
	

if __name__ == "__main__":
	main()