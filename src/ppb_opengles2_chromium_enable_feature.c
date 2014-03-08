/*
 * Copyright © 2013-2014  Rinat Ibragimov
 *
 * This file is part of FreshPlayerPlugin.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "ppb_opengles2.h"
#include <stddef.h>
#include "trace.h"


GLboolean
ppb_opengles2_chromium_enable_feature_enable_feature_chromium(PP_Resource context,
                                                              const char *feature)
{
    return PP_FALSE;
}

static
GLboolean
trace_ppb_opengles2_chromium_enable_feature_enable_feature_chromium(PP_Resource context,
                                                                    const char *feature)
{
    trace_info("[PPB] {zilch} %s\n", __func__+6);
    return ppb_opengles2_chromium_enable_feature_enable_feature_chromium(context, feature);
}


const struct PPB_OpenGLES2ChromiumEnableFeature ppb_opengles2_chromium_enable_feature_interface_1_0 = {
    .EnableFeatureCHROMIUM = trace_ppb_opengles2_chromium_enable_feature_enable_feature_chromium,
};