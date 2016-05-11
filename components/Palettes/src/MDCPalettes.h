/*
 Copyright 2016-present Google Inc. All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import <UIKit/UIKit.h>

/**
 A palette of Material colors.

 Material palettes have a set of named tint colors and an optional set of named accent colors. This
 class provides access to the pre-defined set of Material palettes. MDCPalette objects are
 immutable; it is safe to use them from multiple threads in your app.

 @see https://www.google.com/design/spec/style/color.html#color-color-palette
 */
@interface MDCPalette : NSObject

/** The red palette. */
+ (nonnull MDCPalette *)redPalette;

/** The pink palette. */
+ (nonnull MDCPalette *)pinkPalette;

/** The purple palette. */
+ (nonnull MDCPalette *)purplePalette;

/** The deep purple palette. */
+ (nonnull MDCPalette *)deepPurplePalette;

/** The indigo palette. */
+ (nonnull MDCPalette *)indigoPalette;

/** The blue palette. */
+ (nonnull MDCPalette *)bluePalette;

/** The light blue palette. */
+ (nonnull MDCPalette *)lightBluePalette;

/** The cyan palette. */
+ (nonnull MDCPalette *)cyanPalette;

/** The teal palette. */
+ (nonnull MDCPalette *)tealPalette;

/** The green palette. */
+ (nonnull MDCPalette *)greenPalette;

/** The light green palette. */
+ (nonnull MDCPalette *)lightGreenPalette;

/** The lime palette. */
+ (nonnull MDCPalette *)limePalette;

/** The yellow palette. */
+ (nonnull MDCPalette *)yellowPalette;

/** The amber palette. */
+ (nonnull MDCPalette *)amberPalette;

/** The orange palette. */
+ (nonnull MDCPalette *)orangePalette;

/** The deep orange palette. */
+ (nonnull MDCPalette *)deepOrangePalette;

/** The brown palette (no accents). */
+ (nonnull MDCPalette *)brownPalette;

/** The grey palette (no accents). */
+ (nonnull MDCPalette *)greyPalette;

/** The blue grey palette (no accents). */
+ (nonnull MDCPalette *)blueGreyPalette;

/** The 50 tint color, the lightest tint of the palette. */
@property(nonatomic, nonnull, readonly) UIColor *tint50;

/** The 100 tint color. */
@property(nonatomic, nonnull, readonly) UIColor *tint100;

/** The 200 tint color. */
@property(nonatomic, nonnull, readonly) UIColor *tint200;

/** The 300 tint color. */
@property(nonatomic, nonnull, readonly) UIColor *tint300;

/** The 400 tint color. */
@property(nonatomic, nonnull, readonly) UIColor *tint400;

/** The 500 tint color, the representative tint of the palette. */
@property(nonatomic, nonnull, readonly) UIColor *tint500;

/** The 600 tint color. */
@property(nonatomic, nonnull, readonly) UIColor *tint600;

/** The 700 tint color. */
@property(nonatomic, nonnull, readonly) UIColor *tint700;

/** The 800 tint color. */
@property(nonatomic, nonnull, readonly) UIColor *tint800;

/** The 900 tint color, the darkest tint of the palette. */
@property(nonatomic, nonnull, readonly) UIColor *tint900;

/** The A100 accent color, the lightest accent color. */
@property(nonatomic, nullable, readonly) UIColor *accent100;

/** The A200 accent color. */
@property(nonatomic, nullable, readonly) UIColor *accent200;

/** The A400 accent color. */
@property(nonatomic, nullable, readonly) UIColor *accent400;

/** The A700 accent color, the darkest accent color. */
@property(nonatomic, nullable, readonly) UIColor *accent700;

@end
