## Cypress board cy8cproto-062-4343w

<https://www.cypress.com/documentation/development-kitsboards/psoc-6-wi-fi-bt-prototyping-kit-cy8cproto-062-4343w>

<https://www.cypress.com/file/457891/download>

<https://os.mbed.com/platforms/cy8cproto-062-4343w/>

## Firmware update

<https://github.com/cypresssemiconductorco/Firmware-loader/releases>

## Thermistor measurement

<https://iotexpert.com/2019/12/09/mouser-psoc-6-wifi-bt-mbed-l4-temperature-thread/>

Forked from 
<https://github.com/maclobdell/mbed-os-example-pelion/tree/add-cy8cproto-capsense-slider>

```
mbed status
mbed device-management init -d arm.com --model-name example-app --force -q
mbed compile -m CY8CPROTO_062_4343W -t GCC_ARM
cp ./BUILD/CY8CPROTO_062_4343W/GCC_ARM/cypress-062-4343w.hex /Volumes/DAPLINK/
```

