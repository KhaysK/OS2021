rm -f lofs.img
rm -rf lofsdisk

dd if=/dev/zero of=lofs.img bs=1M count=1000
mkfs lofs.img
sudo losetup -f lofs.img
mkdir lofsdisk
sudo mount --source lofs.img --target lofsdisk

chmod 777 lofsdisk