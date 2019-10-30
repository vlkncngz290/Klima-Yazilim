import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)
birinciKademe=24
ikinciKademe=25
ucuncuKademe=8
GPIO.setup(birinciKademe,GPIO.OUT)
GPIO.setup(ikinciKademe,GPIO.OUT)
GPIO.setup(ucuncuKademe,GPIO.OUT)
GPIO.output(ikinciKademe,GPIO.HIGH)
GPIO.output(ucuncuKademe,GPIO.HIGH)
GPIO.output(birinciKademe,GPIO.LOW)
