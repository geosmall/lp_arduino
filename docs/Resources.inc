1.) F405RG Revo =========================================================

  I.) SPI GYRO ----------------------------------------------------------

		void DMA2_Stream0_IRQHandler(void) __attribute__((alias("PIOS_SPI_gyro_irq_handler")));
		void DMA2_Stream3_IRQHandler(void) __attribute__((alias("PIOS_SPI_gyro_irq_handler")));

  	.regs  = SPI1
    .remap = GPIO_AF_SPI1
    .dma
  		.NVIC_IRQChannel = DMA2_Stream0_IRQn (.rx)
    .rx
    	.channel = DMA2_Stream0,
      .init
      	.DMA_Channel = DMA_Channel_3
    .tx
      .channel = DMA2_Stream3,
      .init
      	.DMA_Channel = DMA_Channel_3
    .sclk
      .gpio = GPIOA, GPIO_Pin_5
    .miso
      .gpio = GPIOA, GPIO_Pin_6
    .mosi
    	.gpio = GPIOA, GPIO_Pin_7
    .slave_count = 1
    .ssel
    	.gpio = GPIOA, GPIO_Pin_4

		static const struct pios_exti_cfg pios_exti_mpu6000_cfg __exti_config = {
    .vector = PIOS_MPU6000_IRQHandler
    .line = EXTI_Line4
    .pin
    	.gpio = GPIOC, GPIO_Pin_4
    .irq
      .init
      	.NVIC_IRQChannel = EXTI4_IRQn
    .exti
      .init
        .EXTI_Line = EXTI_Line4 // matches above GPIO pin

	II.) SPI FLASH --------------------------------------------------------

  	void DMA1_Stream0_IRQHandler(void) __attribute__((alias("PIOS_SPI_telem_flash_irq_handler")));
  	void DMA1_Stream5_IRQHandler(void) __attribute__((alias("PIOS_SPI_telem_flash_irq_handler")));

    .regs  = SPI3
    .remap = GPIO_AF_SPI3
    .dma
    	.NVIC_IRQChannel = DMA1_Stream0_IRQn (.rx)
    .rx
    	.channel = DMA1_Stream0
      .init
      	.DMA_Channel = DMA_Channel_0
    .tx
    	.channel = DMA1_Stream5
      .init
      	.DMA_Channel = DMA_Channel_0
    .sclk
      .gpio = GPIOC, GPIO_Pin_10
    .miso
      .gpio = GPIOC, GPIO_Pin_11
    .mosi
      .gpio = GPIOC, GPIO_Pin_12
    .slave_count = 2
    .ssel
     	// RFM22b
      .gpio = GPIOA, GPIO_Pin_15
     	// Flash
      .gpio = GPIOB, GPIO_Pin_3

	III.) MAIN PORT (RC Rx) = USART1 --------------------------------------

	  .remap = GPIO_AF_USART1
		.rx = GPIOA, GPIO_Pin_10
	  .tx = GPIOA, GPIO_Pin_9

 	IV.) FLEXI PORT = USART3 ----------------------------------------------

    .remap = GPIO_AF_USART3,
    .rx = GPIOB, GPIO_Pin_11
    .tx = GPIOB, GPIO_Pin_10

  V.) PRESSURE ADAPTER I2C = I2C1 ---------------------------------------

  void PIOS_I2C_mag_pressure_adapter_ev_irq_handler(void);
  void PIOS_I2C_mag_pressureadapter_er_irq_handler(void);
  void I2C1_EV_IRQHandler() __attribute__((alias("PIOS_I2C_mag_pressure_adapter_ev_irq_handler")));
  void I2C1_ER_IRQHandler() __attribute__((alias("PIOS_I2C_mag_pressure_adapter_er_irq_handler")));

  .regs     = I2C1
  .remapSCL = GPIO_AF_I2C1
  .remapSDA = GPIO_AF_I2C1
  .scl
    .gpio = GPIOB, GPIO_Pin_8
  .sda
    .gpio = GPIOB, GPIO_Pin_9

  VI.) FLEXI ADAPTER I2C = I2C2 -----------------------------------------

  void PIOS_I2C_flexiport_adapter_ev_irq_handler(void);
  void PIOS_I2C_flexiport_adapter_er_irq_handler(void);
  void I2C2_EV_IRQHandler() __attribute__((alias("PIOS_I2C_flexiport_adapter_ev_irq_handler")));
  void I2C2_ER_IRQHandler() __attribute__((alias("PIOS_I2C_flexiport_adapter_er_irq_handler")));

  .regs     = I2C2,
  .remapSCL = GPIO_AF_I2C2,
  .remapSDA = GPIO_AF_I2C2,
  .scl
    .gpio = GPIOB, GPIO_Pin_10
  .sda
    .gpio = GPIOB, GPIO_Pin_11


2.) F411CE Revonano =====================================================

  I.) SPI GYRO ----------------------------------------------------------
	
	void DMA1_Stream3_IRQHandler(void) __attribute__((alias("PIOS_SPI_gyro_irq_handler")));
	void DMA1_Stream4_IRQHandler(void) __attribute__((alias("PIOS_SPI_gyro_irq_handler")));
	
		.regs  = SPI2
    .remap = GPIO_AF_SPI2
    .dma
    	.NVIC_IRQChannel = DMA1_Stream4_IRQn (.tx ???)
      .rx
      	.channel = DMA1_Stream3
        .init 
        	.DMA_Channel = DMA_Channel_0
        .tx
					.channel = DMA1_Stream4
					.init
						.DMA_Channel = DMA_Channel_0
    		.sclk
        	.gpio = GPIOB, GPIO_Pin_13
    		.miso
        	.gpio = GPIOB, GPIO_Pin_14
    		.mosi
	        .gpio = GPIOB, GPIO_Pin_15
    		.slave_count = 1
    		.ssel
    	    .gpio = GPIOB, GPIO_Pin_12

		static const struct pios_exti_cfg pios_exti_mpu9250_cfg __exti_config = {
    	.vector = PIOS_MPU9250_IRQHandler
    	.line   = EXTI_Line15
    	.pin
        .gpio = GPIOA, GPIO_Pin_15
    	.irq
        .init
        	.NVIC_IRQChannel = EXTI15_10_IRQn
        .exti
        	.init
            .EXTI_Line = EXTI_Line15 // matches above GPIO pin

  III.) MAIN PORT (RC Rx) = USART1 --------------------------------------

	  .remap = GPIO_AF_USART2
		.rx = GPIOA, GPIO_Pin_3
	  .tx = GPIOA, GPIO_Pin_2
 	
  IV.) FLEXI PORT = USART3 ----------------------------------------------

    .remap = GPIO_AF_USART1,
    .rx = GPIOB, GPIO_Pin_7
    .tx = GPIOB, GPIO_Pin_6