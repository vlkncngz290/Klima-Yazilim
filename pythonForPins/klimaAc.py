import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)
motorelektrik=14
motorbaslat=15
evaporfan=23
kondenserfan=24
kompresor=18
GPIO.setup(kompresor,GPIO.OUT)
GPIO.setup(evaporfan,GPIO.OUT)
GPIO.setup(kondenserfan,GPIO.OUT)
GPIO.setup(motorbaslat,GPIO.OUT)
GPIO.setup(motorelektrik,GPIO.OUT)
GPIO.output(motorelektrik,GPIO.LOW)
GPIO.output(evaporfan,GPIO.LOW)
GPIO.output(kondenserfan,GPIO.LOW)
time.sleep(5)
GPIO.output(motorbaslat,GPIO.LOW)
time.sleep(2)
GPIO.output(motorbaslat,GPIO.HIGH)
time.sleep(3)
GPIO.output(kompresor,GPIO.LOW)


