// ADC register offsets
#define ADC_CS_OFFSET    (0x00)
#define ADC_RESULT_OFFSET (0x04)
#define ADC_DIV_OFFSET   (0x10)
#define ADC_FCS_OFFSET (0x08)
#define ADC_INTS_OFFSET (0x10)

// Accessing the ADC registers
#define ADC_CS     (*(volatile uint32_t *)(ADC_BASE + ADC_CS_OFFSET))
#define ADC_RESULT (*(volatile uint32_t *)(ADC_BASE + ADC_RESULT_OFFSET))
#define ADC_DIV    (*(volatile uint32_t *)(ADC_BASE + ADC_DIV_OFFSET))
#define ADC_FCS    (*(volatile uint32_t *)(ADC_BASE + ADC_FCS_OFFSET))


// Define bit masks for relevant fields in the ADC registers
#define ADC_CS_EN          (1 << 0)
#define ADC_CS_READY       (1 << 8)
#define ADC_CS_START_ONCE  (1 << 2)
#define ADC_CS_AINSEL_SHIFT (12)
#define ADC_CS_AINSEL_MASK  (0x7 << ADC_CS_AINSEL_SHIFT)