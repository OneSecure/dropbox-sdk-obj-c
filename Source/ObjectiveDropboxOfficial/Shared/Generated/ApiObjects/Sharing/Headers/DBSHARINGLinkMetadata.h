///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGLinkMetadata;
@class DBSHARINGVisibility;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `LinkMetadata` struct.
///
/// Metadata for a shared link. This can be either a PathLinkMetadata or
/// CollectionLinkMetadata.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGLinkMetadata : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// URL of the shared link.
@property (nonatomic, readonly, copy) NSString *url;

/// Who can access the link.
@property (nonatomic, readonly) DBSHARINGVisibility *visibility;

/// Expiration time, if set. By default the link won't expire.
@property (nonatomic, readonly, nullable) NSDate *expires;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param url URL of the shared link.
/// @param visibility Who can access the link.
/// @param expires Expiration time, if set. By default the link won't expire.
///
/// @return An initialized instance.
///
- (instancetype)initWithUrl:(NSString *)url
                 visibility:(DBSHARINGVisibility *)visibility
                    expires:(nullable NSDate *)expires;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param url URL of the shared link.
/// @param visibility Who can access the link.
///
/// @return An initialized instance.
///
- (instancetype)initWithUrl:(NSString *)url visibility:(DBSHARINGVisibility *)visibility;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `LinkMetadata` struct.
///
@interface DBSHARINGLinkMetadataSerializer : NSObject

///
/// Serializes `DBSHARINGLinkMetadata` instances.
///
/// @param instance An instance of the `DBSHARINGLinkMetadata` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGLinkMetadata` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGLinkMetadata *)instance;

///
/// Deserializes `DBSHARINGLinkMetadata` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGLinkMetadata` API object.
///
/// @return An instantiation of the `DBSHARINGLinkMetadata` object.
///
+ (DBSHARINGLinkMetadata *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
