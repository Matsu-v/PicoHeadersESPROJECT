// GPIO registers offsets
#define GPIO16_CTRL_OFFSET (0x084)
#define GPIO17_CTRL_OFFSET (0x08c)
#define GPIO_OE_OFFSET (0x020)
#define GPIO_IN_OFFSET (0x004 )

// Accessing the ADC registers
#define GPIO16_CTRL (*(volatile uint32_t *)(IO_BANK0_BASE + GPIO16_CTRL_OFFSET))
#define GPIO17_CTRL (*(volatile uint32_t *)(IO_BANK0_BASE + GPIO17_CTRL_OFFSET))
#define GPIO_OE (*(volatile uint32_t *)(SIO_BASE + GPIO_OE_OFFSET))
#define GPIO_IN (*(volatile uint32_t *)(SIO_BASE + GPIO_IN_OFFSET))

// Define bit masks for relevant fields in the GPIO registers
#define GPIO_CTRL_FUNCSEL_SHIFT_TO_SIO (5 << 0)
#define GPIO_OE_GPIO16_CLEAR ~(1 << 16)
#define GPIO_OE_GPIO17_CLEAR ~(1 << 17)
#define GPIO_IN_GPIO16_MASK (1 << 16)
#define GPIO_IN_GPIO17_MASK (1 << 17)