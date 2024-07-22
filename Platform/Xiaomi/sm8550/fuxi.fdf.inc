FILE DRIVER = 5BD181DB-0487-4F1A-AE73-820E165611B3 {
    SECTION DXE_DEPEX = Platform/Xiaomi/sm8550/Drivers/ButtonsDxe.depex
   SECTION PE32 = Platform/Xiaomi/sm8550/Drivers/ButtonsDxe.efi
    SECTION UI = "ButtonsDxe"
}

FILE DRIVER = CD823A4D-7DEC-4531-AE5D-4134FA4127B8 {
    SECTION DXE_DEPEX = Platform/Xiaomi/sm8550/Drivers/UsbConfigDxe.depex
   SECTION PE32 = Platform/Xiaomi/sm8550/Drivers/UsbConfigDxe.efi
    SECTION UI = "UsbConfigDxe"
}

FILE FREEFORM = 25462CDA-221F-47DF-AC1D-259CFAA4E326 {
  SECTION RAW = Platform/Xiaomi/sm8550/FdtBlob_compat/pad6s.dtb
}
