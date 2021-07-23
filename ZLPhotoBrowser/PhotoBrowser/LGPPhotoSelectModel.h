//
//  LGPPhotoSelectModel.h
//  ZLPhotoBrowserFramework
//
//  Created by guopeng Liao on 2021/7/22.
//  Copyright © 2021 long. All rights reserved.
//

#import "ZLPhotoModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface LGPPhotoSelectModel : NSObject

@property (nonatomic, strong) PHAsset *asset;
//asset类型
@property (nonatomic, assign) ZLAssetMediaType type;

@property (nonatomic, strong) UIImage *image;

@property (nonatomic, strong, nullable) NSData *data;

@end

NS_ASSUME_NONNULL_END
