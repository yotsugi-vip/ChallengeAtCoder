"use strict";

import { exit } from "process";

const main = (arg: string) => {
    for (let i = 0; i < 3; i++) {
        if (!(arg.charCodeAt(i) >= 0x30 && arg.charCodeAt(i) <= 0x39)) {
            console.log("error\n");
            exit(0);
        }
    }
    console.log(parseInt(arg, 10) * 2);
}

main(require('fs').readFileSync('/dev/stdin', 'utf8'));