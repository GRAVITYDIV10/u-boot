.. SPDX-License-Identifier: GPL-2.0+

Multiple kernels, ramdisks and FDT blobs
========================================

::

    /dts-v1/;

    / {
        description = "Various kernels, ramdisks and FDT blobs";
        #address-cells = <1>;

        images {
            kernel-1 {
                description = "vanilla-2.6.23";
                data = /incbin/("./vmlinux.bin.gz");
                type = "kernel";
                arch = "ppc";
                os = "linux";
                compression = "gzip";
                load = <00000000>;
                entry = <00000000>;
                hash-1 {
                    algo = "sha256";
                };
                hash-2 {
                    algo = "sha512";
                };
            };

            kernel-2 {
                description = "2.6.23-denx";
                data = /incbin/("./2.6.23-denx.bin.gz");
                type = "kernel";
                arch = "ppc";
                os = "linux";
                compression = "gzip";
                load = <00000000>;
                entry = <00000000>;
                hash-1 {
                    algo = "sha256";
                };
            };

            kernel-3 {
                description = "2.4.25-denx";
                data = /incbin/("./2.4.25-denx.bin.gz");
                type = "kernel";
                arch = "ppc";
                os = "linux";
                compression = "gzip";
                load = <00000000>;
                entry = <00000000>;
                hash-1 {
                    algo = "sha256";
                };
            };

            ramdisk-1 {
                description = "eldk-4.2-ramdisk";
                data = /incbin/("./eldk-4.2-ramdisk");
                type = "ramdisk";
                arch = "ppc";
                os = "linux";
                compression = "gzip";
                load = <00000000>;
                entry = <00000000>;
                hash-1 {
                    algo = "sha256";
                };
            };

            ramdisk-2 {
                description = "eldk-3.1-ramdisk";
                data = /incbin/("./eldk-3.1-ramdisk");
                type = "ramdisk";
                arch = "ppc";
                os = "linux";
                compression = "gzip";
                load = <00000000>;
                entry = <00000000>;
                hash-1 {
                    algo = "crc32";
                };
            };

            fdt-1 {
                description = "tqm5200-fdt";
                data = /incbin/("./tqm5200.dtb");
                type = "flat_dt";
                arch = "ppc";
                compression = "none";
                hash-1 {
                    algo = "crc32";
                };
            };

            fdt-2 {
                description = "tqm5200s-fdt";
                data = /incbin/("./tqm5200s.dtb");
                type = "flat_dt";
                arch = "ppc";
                compression = "none";
                load = <00700000>;
                hash-1 {
                    algo = "sha256";
                };
            };

        };

        configurations {
            default = "config-1";

            config-1 {
                description = "tqm5200 vanilla-2.6.23 configuration";
                kernel = "kernel-1";
                ramdisk = "ramdisk-1";
                fdt = "fdt-1";
            };

            config-2 {
                description = "tqm5200s denx-2.6.23 configuration";
                kernel = "kernel-2";
                ramdisk = "ramdisk-1";
                fdt = "fdt-2";
            };

            config-3 {
                description = "tqm5200s denx-2.4.25 configuration";
                kernel = "kernel-3";
                ramdisk = "ramdisk-2";
            };
        };
    };
