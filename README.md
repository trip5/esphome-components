# ESPHome custom components

This repository contains a collection of my custom components for [ESPHome](https://github.com/esphome/esphome).

## Usage

Add this to your `.yaml` file:

```yaml
external_components:
  - source: github://buzzer13/esphome-components@main
```

## Components

### `tm1650`

7-segment LED display driver component.

Based on the [TM1637 ESPHome component](https://github.com/esphome/esphome/tree/dev/esphome/components/tm1637) and [analysis of 303WIFILC01 clock](https://github.com/maarten-pennings/303WIFILC01).

#### Example

Check out [`example_tm1650.yaml`](example_tm1650.yaml) or code below:

```yaml
external_components:
  - source: github://buzzer13/esphome-components@main
    components:
      - tm1650

time:
  - platform: homeassistant
    id: tm_hass

i2c:
  - id: i2c_main
    sda: 13
    scl: 12
    scan: true

display:
  - platform: tm1650
    id: disp_tm1650
    # i2c_id: i2c_main
    # intensity: 1
    # length: 4
    # mode: 0
    # power: true
    # segment_map: PABCDEFG
    update_interval: 500ms
    lambda: |-
      static int dot = 0;

      if (++dot & 1) {
        it.strftime("%H.%M", id(tm_hass).now());
      } else {
        it.strftime("%H%M", id(tm_hass).now());
      }
```

#### Configuration for 303WIFILC01 clock

There are two sample configurations for the clock in this repository:

- [Minimal config](config_303wifilc01_minimal.yaml). Configures basic time sync, status led and display.
- [Full config](config_303wifilc01_full.yaml). Includes everything from minimal config plus:
  - Handles **Set/Up/Down** push buttons (mapped to the display brightness control by default).
  - Automatically turns off display at night and startup from 12 AM till 8 AM.
  - Displays multiple text strings pulled from Home Assistant API.
  - Exposes following configuration switches to the Home Assistant:
    - Display brightness (current, day and night).
    - Time and text display timeouts in seconds.
