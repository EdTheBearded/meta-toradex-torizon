PREFERRED_PROVIDER_virtual/dtb = "device-tree-overlays-mainline"

WKS_FILE:sota = "torizon-imx95-sota.wks"

OSTREE_KERNEL_ARGS:sota:append = "console=ttyLP0,115200 earlycon root=LABEL=otaroot rootfstype=ext4"
PREFERRED_PROVIDER_u-boot-default-script:sota = "u-boot-distro-boot"
PREFERRED_PROVIDER_u-boot-default-script = "u-boot-distro-boot"

SOC_DEFAULT_WKS_FILE = "imx-imx-boot-bootpart.wks.in"
IMAGE_BOOT_FILES = "imx-boot"
IMAGE_BOOT_FILES:sota = "imx-boot"

UBOOT_CONFIG[sd] = "${UBOOT_CONFIG_BASENAME}_defconfig,sdcard"                                     
UBOOT_CONFIG[fspi] = "${UBOOT_CONFIG_BASENAME}_fspi_defconfig"

CORE_IMAGE_BASE_INSTALL:append = "resize-helper"