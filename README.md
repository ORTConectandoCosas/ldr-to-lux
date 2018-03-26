
# Conectando Cosas: medición de luz usando un foto-resistor.


## Objetivo

El objetivo de esta clase es realizar la medición de luz utilizando un foto-resistor y el conversor A/D del Arduino. La salida será graficada con el Serial Plotter.

La salida deberá estar en *lux*, la medida estándar de intensidad luminosa sobre una superficie. Para ello, debemos

1. Medir el valor de caída de tensión en el foto-resistor.
2. Convertir el valor a una resistencia medida.
3. Convertir la resistencia a *lux* utilizando los parámetros de funcionamiento del fotoresistor (hoja de datos).
4. Ajustar el circuito y el código para que el rango de medida sea adecuado.

Para el cálculo completo ver Medición de luz.ipynb
