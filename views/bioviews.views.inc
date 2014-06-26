<?php

  /**
  * @file
  * Views integration for the mydons custom module
  */

 /**
  * Implements hook_views_data()
  *
  */
  function bioviews_views_data() {
     $data = array();

      // Table name is "biomaterial_value".
      $data['biomaterial_value']['table']['group'] = t('Biomaterial');

      $data['biomaterial_value']['table']['base'] = array(
           'field' => 'bio_val_id',  //Primary key
           'title' => 'biomaterial_value custom table',
           'help' => 'biomaterial_value custom database table'  
         );

   // Description of name field

    $data['biomaterial_value']['name'] = array(
         'title' => t('NAME'), 
         'help' => t('biomaterial_val name field'), 
         'field' => array(
            'handler' => 'views_handler_field', 
            'click sortable' => TRUE,
         ), 
         'sort' => array(
             'handler' => 'views_handler_sort',
          ), 
         'filter' => array(
              'handler' => 'views_handler_filter_string',
           ), 
         'argument' => array(
              'handler' => 'views_handler_argument_string',
          ),
       );

  // Description of cultivar field

  $data['biomaterial_value']['cultivar'] = array(
      'title' => t('CULTIVAR'), 
      'help' => t('biomaterial_val cultivar field'), 
      'field' => array(
         'handler' => 'views_handler_field', 
         'click sortable' => TRUE,
       ), 
       'sort' => array(
       'handler' => 'views_handler_sort',
    ), 
   'filter' => array(
       'handler' => 'views_handler_filter_string',
   ), 
   'argument' => array(
       'handler' => 'views_handler_argument_string',
  ),
);

 // Description of the age field

  $data['biomaterial_value']['age'] = array(
      'title' => t('AGE'),
      'help' => t('biomaterial_val age field'),
      'field' => array(
          'handler' => 'views_handler_field',
          'click sortable' => TRUE,
        ),
       'sort' => array(
            'handler' => 'views_handler_sort',
        ),
        'filter' => array(
            'handler' => 'views_handler_filter_string',
         ),
        'argument' => array(
            'handler' => 'views_handler_argument_string',
         ),
      );

   //Description of the tissue field

   $data['biomaterial_value']['tissue'] = array(
       'title' => t('TISSUE'), 
       'help' => t('biomaterial_val tissue field.'), 
       'field' => array(
       'handler' => 'views_handler_field', 
       'click sortable' => TRUE,
       ), 
       'sort' => array(
         'handler' => 'views_handler_sort',
        ), 
        'filter' => array(
          'handler' => 'views_handler_filter_string',
       ), 
        'argument' => array(
            'handler' => 'views_handler_argument_string',
        ),
     );

    // Description of the treatment field

    $data['biomaterial_value']['treatment'] = array(
        'title' => t('TREATMENT'), 
        'help' => t('biomaterial_val treatment field.'), 
        'field' => array(
           'handler' => 'views_handler_field', 
          'click sortable' => TRUE,
        ), 
        'sort' => array(
           'handler' => 'views_handler_sort',
         ), 
         'filter' => array(
            'handler' => 'views_handler_filter_string',
          ), 
         'argument' => array(
            'handler' => 'views_handler_argument_string',
         ),
     );

    // Description of the phenotype field

    $data['biomaterial_value']['phenotype'] = array(
         'title' => t('PHENOTYPE'), 
         'help' => t('phenotype field.'), 
         'field' => array(
             'handler' => 'views_handler_field', 
             'click sortable' => TRUE,
          ), 
          'sort' => array(
              'handler' => 'views_handler_sort',
           ), 
          'filter' => array(
              'handler' => 'views_handler_filter_string',
            ), 
            'argument' => array(
                'handler' => 'views_handler_argument_string',
            ),
       );

      // Description of the developmental_stage

       $data['biomaterial_value']['developmental_stage'] = array(
            'title' => t('DEVELOPMENT STAGE'),       
             'help' => t('phenotype field.'),        
             'field' => array(
                'handler' => 'views_handler_field',
                'click sortable' => TRUE,
            ),
            'sort' => array(
              'handler' => 'views_handler_sort',
            ),
            'filter' => array(
              'handler' => 'views_handler_filter_string',
            ),
           'argument' => array(
              'handler' => 'views_handler_argument_string',
             ),
         );

     // Description of the source field

      $data['biomaterial_value']['source'] = array(
          'title' => t('SOURCE'),       
          'help' => t('phenotype field.'),        
          'field' => array(
            'handler' => 'views_handler_field',
            'click sortable' => TRUE,
          ),
          'sort' => array(
            'handler' => 'views_handler_sort',
          ),
          'filter' => array(
             'handler' => 'views_handler_filter_string',
           ),
           'argument' => array(
              'handler' => 'views_handler_argument_string',
           ),
      );

      // Description of bio_val_id.
       $data['biomaterial_value']['bio_val_id'] = array(
         'title' => t('ID'),
         'help' => t('biomaterial_value ID field'),
         // Is field sortable TRUE.
         'field' => array(
             'click sortable' => TRUE,
          ),
         // Filter handler for filtering records.
        'filter' => array(
           'handler' => 'views_handler_filter_numeric'
        ),
        'sort' => array(
          'handler' => 'views_handler_sort'
        )
    );

     return $data;

 }
