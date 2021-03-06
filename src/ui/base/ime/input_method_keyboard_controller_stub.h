// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_BASE_IME_INPUT_METHOD_KEYBOARD_CONTROLLER_STUB_H_
#define UI_BASE_IME_INPUT_METHOD_KEYBOARD_CONTROLLER_STUB_H_

#include "base/macros.h"
#include "ui/base/ime/input_method_keyboard_controller.h"
#include "ui/base/ime/ui_base_ime_export.h"

namespace ui {

// This class provides a stub InputMethodKeyboardController.
class UI_BASE_IME_EXPORT InputMethodKeyboardControllerStub
    : public InputMethodKeyboardController {
 public:
  InputMethodKeyboardControllerStub();
  ~InputMethodKeyboardControllerStub() override;

  // InputMethodKeyboardController overrides.
  bool DisplayVirtualKeyboard() final;
  void DismissVirtualKeyboard() final;
  void AddObserver(InputMethodKeyboardControllerObserver* observer) final;
  void RemoveObserver(InputMethodKeyboardControllerObserver* observer) final;
  bool IsKeyboardVisible() const final;

 private:
  DISALLOW_COPY_AND_ASSIGN(InputMethodKeyboardControllerStub);
};

}  // namespace ui

#endif  // UI_BASE_IME_INPUT_METHOD_KEYBOARD_CONTROLLER_STUB_H_
