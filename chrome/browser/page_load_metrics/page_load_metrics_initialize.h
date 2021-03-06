// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_PAGE_LOAD_METRICS_PAGE_LOAD_METRICS_INITIALIZE_H_
#define CHROME_BROWSER_PAGE_LOAD_METRICS_PAGE_LOAD_METRICS_INITIALIZE_H_

#include "chrome/browser/page_load_metrics/metrics_web_contents_observer.h"

namespace content {
class WebContents;
}

namespace chrome {

void InitializePageLoadMetricsForWebContents(
    content::WebContents* web_contents,
    const base::Optional<content::WebContents::CreateParams>& create_params);

}  // namespace chrome

#endif  // CHROME_BROWSER_PAGE_LOAD_METRICS_PAGE_LOAD_METRICS_INITIALIZE_H_
