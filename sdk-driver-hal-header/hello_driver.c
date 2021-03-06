/*
 * Copyright (C) 2020 ETH Zurich and University of Bologna
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* This exercise shows how to add a custom hal header to the pulp-sdk.
  Do NOT edit this file to pass the tests. */

#include <pulp.h>
#include <hal/my_ip/my_ip_v1.h>
#include <stdio.h>

int main()
{
#ifdef MY_DRIVER_MACRO
    puts("MY_DRIVER_MACRO successfully included from pulp-sdk");
#else
    puts("Fail\n");
    return 1;
#endif

#ifdef MY_DRIVER_SECOND_TEST
    my_ip_hal_func();
    puts("MY_DRIVER_SECOND_TEST passed\n");
#endif

    return 0;
}
