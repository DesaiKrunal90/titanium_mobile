/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2010 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

#import "TiModule.h"
#import "KrollCallback.h"

@interface MediaModule : TiModule<UINavigationControllerDelegate,UIImagePickerControllerDelegate> {
@private
	UIImagePickerController *picker;
	BOOL animatedPicker;
	BOOL saveToRoll;
	BOOL autoHidePicker;
	KrollCallback *pickerSuccessCallback;
	KrollCallback *pickerErrorCallback;
	KrollCallback *pickerCancelCallback;
}


@property(nonatomic,readonly) NSNumber* UNKNOWN_ERROR;
@property(nonatomic,readonly) NSNumber* DEVICE_BUSY;
@property(nonatomic,readonly) NSNumber* NO_CAMERA;
@property(nonatomic,readonly) NSNumber* NO_VIDEO;

@property(nonatomic,readonly) NSNumber* VIDEO_CONTROL_DEFAULT;
@property(nonatomic,readonly) NSNumber* VIDEO_CONTROL_VOLUME_ONLY;
@property(nonatomic,readonly) NSNumber* VIDEO_CONTROL_HIDDEN;

@property(nonatomic,readonly) NSNumber* VIDEO_SCALING_NONE;
@property(nonatomic,readonly) NSNumber* VIDEO_SCALING_ASPECT_FIT;
@property(nonatomic,readonly) NSNumber* VIDEO_SCALING_ASPECT_FILL;
@property(nonatomic,readonly) NSNumber* VIDEO_SCALING_MODE_FILL;

@property(nonatomic,readonly) NSNumber* QUALITY_HIGH;
@property(nonatomic,readonly) NSNumber* QUALITY_MEDIUM;
@property(nonatomic,readonly) NSNumber* QUALITY_LOW;


@property(nonatomic,readonly) NSArray* availableCameraMediaTypes;
@property(nonatomic,readonly) NSArray* availablePhotoMediaTypes;
@property(nonatomic,readonly) NSArray* availablePhotoGalleryMediaTypes;


@end
