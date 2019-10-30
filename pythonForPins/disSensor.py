import Adafruit_DHT
sensor = Adafruit_DHT.DHT11
pin = 3
try:
    humidity, temperature = Adafruit_DHT.read_retry(sensor, pin)
except Exception as hata:
    varlik=hata
if humidity is not None and temperature is not None:
    print('{0:0.1f}'.format(temperature))
else:
    print("88");
        

