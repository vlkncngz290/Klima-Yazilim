import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)
motorelektrik=14
kompresor=18
evaporfan=23
kondenserfan=24
kondenser2fan=25
kondenser3fan=8
GPIO.setup(kompresor,GPIO.OUT)
GPIO.setup(motorelektrik,GPIO.OUT)
GPIO.setup(kondenserfan,GPIO.OUT)
GPIO.setup(kondenser2fan,GPIO.OUT)
GPIO.setup(kondenser3fan,GPIO.OUT)
GPIO.setup(evaporfan,GPIO.OUT)
GPIO.output(kompresor,GPIO.HIGH)
GPIO.output(motorelektrik,GPIO.HIGH)
GPIO.output(evaporfan,GPIO.HIGH)
GPIO.output(kondenserfan,GPIO.HIGH)
GPIO.output(kondenser2fan,GPIO.HIGH)
GPIO.output(kondenser3fan,GPIO.HIGH)



