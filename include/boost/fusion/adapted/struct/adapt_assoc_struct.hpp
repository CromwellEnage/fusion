/*============================================================================
    Copyright (c) 2001-2007 Joel de Guzman
    Copyright (c) 2007 Dan Marsden
    Copyright (c) 2009-2011 Christopher Schmidt

    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
============================================================================*/
#if !defined(BOOST_FUSION_ADAPTED_STRUCT_ADAPT_ASSOC_STRUCT_HPP)
#define BOOST_FUSION_ADAPTED_STRUCT_ADAPT_ASSOC_STRUCT_HPP

#include <boost/fusion/adapted/struct/detail/extension.hpp>
#include <boost/fusion/adapted/struct/detail/adapt_base.hpp>
#include <boost/fusion/adapted/struct/detail/adapt_base_assoc_attr_filler.hpp>
#include <boost/fusion/adapted/struct/detail/at_impl.hpp>
#include <boost/fusion/adapted/struct/detail/is_view_impl.hpp>
#include <boost/fusion/adapted/struct/detail/is_sequence_impl.hpp>
#include <boost/fusion/adapted/struct/detail/value_at_impl.hpp>
#include <boost/fusion/adapted/struct/detail/category_of_impl.hpp>
#include <boost/fusion/adapted/struct/detail/size_impl.hpp>
#include <boost/fusion/adapted/struct/detail/begin_impl.hpp>
#include <boost/fusion/adapted/struct/detail/end_impl.hpp>
#include <boost/fusion/adapted/struct/detail/value_of_impl.hpp>
#include <boost/fusion/adapted/struct/detail/deref_impl.hpp>
#include <boost/fusion/adapted/struct/detail/deref_data_impl.hpp>
#include <boost/fusion/adapted/struct/detail/key_of_impl.hpp>
#include <boost/fusion/adapted/struct/detail/value_of_data_impl.hpp>
#include <boost/fusion/support/config.hpp>
#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/empty.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/comparison/less.hpp>

#define BOOST_FUSION_ADAPT_ASSOC_STRUCT_C_BASE(                              \
    TEMPLATE_PARAMS_SEQ,NAME_SEQ,IS_VIEW,I,PREFIX,ATTRIBUTE                  \
)                                                                            \
    BOOST_FUSION_ADAPT_STRUCT_C_BASE(                                        \
        TEMPLATE_PARAMS_SEQ                                                  \
      , NAME_SEQ                                                             \
      , IS_VIEW                                                              \
      , I                                                                    \
      , BOOST_PP_IIF(IS_VIEW, BOOST_FUSION_PROXY_PREFIX, BOOST_PP_EMPTY)     \
      , BOOST_FUSION_ADAPT_STRUCT_WRAPPEDATTR(ATTRIBUTE)                     \
      , BOOST_FUSION_ADAPT_STRUCT_WRAPPEDATTR_SIZE(ATTRIBUTE)                \
      , BOOST_PP_LESS(                                                       \
            BOOST_FUSION_ADAPT_STRUCT_WRAPPEDATTR_SIZE(ATTRIBUTE), 3         \
        )                                                                    \
    )                                                                        \
    template<                                                                \
        BOOST_FUSION_ADAPT_STRUCT_UNPACK_TEMPLATE_PARAMS(                    \
            TEMPLATE_PARAMS_SEQ                                              \
        )                                                                    \
    >                                                                        \
    struct struct_assoc_key<                                                 \
        BOOST_FUSION_ADAPT_STRUCT_UNPACK_NAME(NAME_SEQ)                      \
      , I                                                                    \
    >                                                                        \
    {                                                                        \
        typedef BOOST_FUSION_ADAPT_ASSOC_STRUCT_WRAPPEDATTR_GET_KEY(         \
            ATTRIBUTE                                                        \
        ) type;                                                              \
    };

#define BOOST_FUSION_ADAPT_ASSOC_STRUCT_C(                                   \
    TEMPLATE_PARAMS_SEQ, NAME_SEQ,IS_VIEW, I, ATTRIBUTE                      \
)                                                                            \
    BOOST_FUSION_ADAPT_ASSOC_STRUCT_C_BASE(                                  \
        TEMPLATE_PARAMS_SEQ, NAME_SEQ, IS_VIEW, I, BOOST_PP_EMPTY, ATTRIBUTE \
    )


#define BOOST_FUSION_ADAPT_ASSOC_TPL_STRUCT(                                 \
    TEMPLATE_PARAMS_SEQ, NAME_SEQ, ATTRIBUTES                                \
)                                                                            \
    BOOST_FUSION_ADAPT_STRUCT_BASE(                                          \
        (1)TEMPLATE_PARAMS_SEQ                                               \
      , (1)NAME_SEQ                                                          \
      , assoc_struct_tag                                                     \
      , 0                                                                    \
      , BOOST_PP_CAT(                                                        \
            BOOST_FUSION_ADAPT_ASSOC_STRUCT_FILLER_0(0, 0, 0)ATTRIBUTES      \
          , _END                                                             \
        )                                                                    \
      , BOOST_FUSION_ADAPT_ASSOC_STRUCT_C                                    \
    )

#define BOOST_FUSION_ADAPT_ASSOC_STRUCT(NAME, ATTRIBUTES)                    \
    BOOST_FUSION_ADAPT_STRUCT_BASE(                                          \
        (0)                                                                  \
      , (0)(NAME)                                                            \
      , assoc_struct_tag                                                     \
      , 0                                                                    \
      , BOOST_PP_CAT(                                                        \
            BOOST_FUSION_ADAPT_ASSOC_STRUCT_FILLER_0(0, 0, 0)ATTRIBUTES      \
          , _END                                                             \
        )                                                                    \
      , BOOST_FUSION_ADAPT_ASSOC_STRUCT_C                                    \
    )

#define BOOST_FUSION_ADAPT_ASSOC_STRUCT_AS_VIEW(NAME, ATTRIBUTES)            \
    BOOST_FUSION_ADAPT_STRUCT_BASE(                                          \
        (0)                                                                  \
      , (0)(NAME)                                                            \
      , assoc_struct_tag                                                     \
      , 1                                                                    \
      , BOOST_PP_CAT(                                                        \
            BOOST_FUSION_ADAPT_ASSOC_STRUCT_FILLER_0(0, 0, 0)ATTRIBUTES      \
          , _END                                                             \
        )                                                                    \
      , BOOST_FUSION_ADAPT_ASSOC_STRUCT_C                                    \
    )

#endif  // include guard

