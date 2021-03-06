<?php

/**
 * @file
 * Providing extra functionality for the Eventbrite UI via views.
 */

/**
 * Implements hook_views_data()
 */
function eventbrite_api_views_data() {
  $data = array();
  
  /**
   * Integrate the events table.
   */
  $data['eventbrite_api_events']['table']['group']  = t('Eventbrite events');
  $data['eventbrite_api_events']['table']['entity type'] = 'event';

  $data['eventbrite_api_events']['table']['base'] = array(
    'field' => 'eid',
    'title' => t('Eventbrite Event'),
    'help' => t('Eventbrite Events.'),
  );

  // Expose the event ID.
  $data['eventbrite_api_events']['eid'] = array(
    'title' => t('Event ID'),
    'help' => t('The unique internal identifier of the event.'),
    'field' => array(  
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );
  
   $data['eventbrite_api_events']['tid'] = array(
    'title' => t('Tickets'),
    'help' => t('The unique internal identifier of event tickets.'),
    'relationship' => array(
      'base' => 'eventbrite_api_tickets',
      'base field' => 'eid',
      'field' => 'eid',
      'handler' => 'views_handler_relationship',
      'label' => t('Event tickets'),
      'title' => t('Tickets'),
      'help' => t('The tickets associated with the event.'),
    ),
  );

  // Expose the organizer id.
  $data['eventbrite_api_events']['oid'] = array(
    'title' => t('Organizer ID'),
    'help' => t('The unique internal identifier of the event organizer.'),
    'relationship' => array(
      'handler' => 'views_handler_relationship',
      'base' => 'eventbrite_api_organizers',
      'base field' => 'oid',
      'label' => t('Event organizer'),
      'title' => t('Organizer'),
      'help' => t('The organizer associated with the event.'),
    ),
  );

  // Expose the venue id.
  $data['eventbrite_api_events']['vid'] = array(
    'title' => t('Venue ID'),
    'help' => t('The unique internal identifier of the event venue.'),
    'relationship' => array(
      'handler' => 'views_handler_relationship',
      'base' => 'eventbrite_api_venues',
      'base field' => 'vid',
      'label' => t('Event venue'),
      'title' => t('Venue'),
      'help' => t('The venue associated with the event.'),
    ),
  );
  
  if (module_exists('locale')) {
    // Expose the language.
    $data['eventbrite_api_events']['locale'] = array(
      'title' => t('Language'),
      'help' => t('The language the event is in.'),
      'field' => array(
       'handler' => 'views_handler_field_locale_language',
       'click sortable' => TRUE,
      ),
     'filter' => array(
       'handler' => 'views_handler_filter_locale_language',
     ),
     'argument' => array(
       'handler' => 'views_handler_argument_locale_language',
     ),
     'sort' => array(
     'handler' => 'views_handler_sort',
     ),
    );
  }
  
  // Expose the timezone.
  $data['eventbrite_api_events']['timezone'] = array(
    'title' => t('Timezone'),
    'help' => t('The event timezone.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // Expose the category.
  $data['eventbrite_api_events']['category'] = array(
    'title' => t('Category'),
    'help' => t('The event category.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // Expose the event capacity.
  $data['eventbrite_api_events']['capacity'] = array(
    'title' => t('Capacity'),
    'help' => t('The capacity of the event.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  // Expose the number of registered event attendees.
  $data['eventbrite_api_events']['num_attendee_rows'] = array(
    'title' => t('Registered attendees'),
    'help' => t('The umber of registered event attendees.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  // Expose the event title.
  $data['eventbrite_api_events']['title'] = array(
    'title' => t('Title'),
    'help' => t('The title of the event.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // Expose the event start date.
  $data['eventbrite_api_events']['start_date'] = array(
    'title' => t('Start date'),
    'help' => t('The date the event starts.'),
    'field' => array(
      'handler' => 'eventbrite_api_handler_field_datetime',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_date',
    ),
  );

  // Expose the event description.
  $data['eventbrite_api_events']['description'] = array(
    'title' => t('Description'),
    'help' => t('The description of the event.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  // Expose the event tags.
  $data['eventbrite_api_events']['tags'] = array(
    'title' => t('Tags'),
    'help' => t('The event tags.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // Expose the event timezone offset.
  $data['eventbrite_api_events']['timezone_offset'] = array(
    'title' => t('Timezone offset'),
    'help' => t('The event timezone offset.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // Expose the event password.
  $data['eventbrite_api_events']['password'] = array(
    'title' => t('Password'),
    'help' => t('The event password.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // Expose the date the event was created.
  $data['eventbrite_api_events']['created'] = array(
    'title' => t('Created'),
    'help' => t('The date the event was created.'),
    'field' => array(
      'handler' => 'eventbrite_api_handler_field_datetime',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_date',
    ),
  );

  // Expose the event URL.
  $data['eventbrite_api_events']['url'] = array(
    'title' => t('URL'),
    'help' => t('The event URL.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // Expose the event privacy setting.
  $data['eventbrite_api_events']['privacy'] = array(
    'title' => t('Privacy'),
    'help' => t('Whether the event is public or private.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // Expose the date the event was modified.
  $data['eventbrite_api_events']['modified'] = array(
    'title' => t('Modified'),
    'help' => t('The date the event was modified.'),
    'field' => array(
      'handler' => 'eventbrite_api_handler_field_datetime',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_date',
    ),
  );

  // Expose the event repetition setting.
  $data['eventbrite_api_events']['repeats'] = array(
    'title' => t('Repeats'),
    'help' => t('Whether the event repeats or not.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // Expose links to operate on the event.
  $data['eventbrite_api_events']['edit_event'] = array(
    'field' => array(
      'title' => t('Edit link'),
      'help' => t('Provide a simple link to the edit event page.'),
      'handler' => 'eventbrite_api_handler_field_event_link',
    ),
  );
  
  $data['eventbrite_api_events']['delete_event'] = array(
    'field' => array(
      'title' => t('Delete link'),
      'help' => t('Provide a simple link to the administrator view of the event.'),
      'handler' => 'eventbrite_api_handler_field_event_link_delete',
    ),
  );

  /**
   * Integrate the organizers table.
   */
  $data['eventbrite_api_organizers']['table']['group']  = t('Eventbrite organizer');
  $data['eventbrite_api_organizers']['table']['entity type'] = 'organizer';

  $data['eventbrite_api_organizers']['table']['base'] = array(
    'field' => 'oid',
    'title' => t('Eventbrite Organizers'),
    'help' => t('Organizers of Eventbrite events.'),
  );

  // Expose the organizer ID.
  $data['eventbrite_api_organizers']['oid'] = array(
    'title' => t('Organizer ID'),
    'help' => t('The unique internal identifier of the event organizer.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  // Expose the organizer name.
  $data['eventbrite_api_organizers']['name'] = array(
    'title' => t('Name'),
    'help' => t('The name of the event organizer.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['eventbrite_api_organizers']['table']['default_relationship'] = array(
    'events' => array(
      'table' => 'events',
      'field' => 'oid',
    ),
  );

  // Expose the organizer description.
  $data['eventbrite_api_organizers']['description'] = array(
    'title' => t('Description'),
    'help' => t('The description of the event organizer.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // Expose the organizer long description.
  $data['eventbrite_api_organizers']['long_description'] = array(
    'title' => t('Long description'),
    'help' => t('The long description of the event organizer.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // Expose the organizer's URL.
  $data['eventbrite_api_organizers']['url'] = array(
    'title' => t('URL'),
    'help' => t('The URL of the event organizer.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // Expose links to operate on the organizer.
  $data['eventbrite_api_organizers']['edit_organizer'] = array(
    'field' => array(
      'title' => t('Edit link'),
      'help' => t('Provide a simple link to the edit organizer page.'),
      'handler' => 'eventbrite_api_handler_field_organizer_link_edit',
    ),
  );

  /**
   * Integrate the tickets table.
   */
  $data['eventbrite_api_tickets']['table']['group']  = t('Eventbrite ticket');
  $data['eventbrite_api_tickets']['table']['entity type'] = 'ticket';

  $data['eventbrite_api_tickets']['table']['base'] = array(
    'field' => 'tid',
    'title' => t('Eventbrite Tickets'),
    'help' => t('Tickets for Eventbrite events.'),
    'defaults' => array(
      'field' => 'name',
    ),
  );

  $data['eventbrite_api_tickets']['table']['default_relationship'] = array(
    'events' => array(
      'table' => 'events',
      'field' => 'eid',
    ),
  );

  // Expose the ticket ID.
  $data['eventbrite_api_tickets']['tid'] = array(
    'title' => t('Ticket ID'),
    'help' => t('The unique internal identifier of the event ticket.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  // Expose the event id.
  $data['eventbrite_api_tickets']['eid'] = array(
    'title' => t('Event ID'),
    'help' => t('The unique internal identifier of the event.'),
    'relationship' => array(
      'handler' => 'views_handler_relationship',
      'base' => 'eventbrite_api_events',
      'base field' => 'eid',
      'label' => t('Event'),
    ),
  );

  // Expose the ticket name.
  $data['eventbrite_api_tickets']['name'] = array(
    'title' => t('Name'),
    'help' => t('The name of the ticket.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // Expose the ticket description.
  $data['eventbrite_api_tickets']['description'] = array(
    'title' => t('Description'),
    'help' => t('The description of the ticket.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // Expose the ticket start date.
  $data['eventbrite_api_tickets']['start_date'] = array(
    'title' => t('Start date'),
    'help' => t('The date the ticket starts.'),
    'field' => array(
      'handler' => 'eventbrite_api_handler_field_datetime',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_date',
    ),
  );

  // Expose the ticket end date.
  $data['eventbrite_api_tickets']['end_date'] = array(
    'title' => t('End date'),
    'help' => t('The date the ticket ends.'),
    'field' => array(
      'handler' => 'eventbrite_api_handler_field_datetime',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_date',
    ),
  );

  // Expose the ticket minimum purchase.
  $data['eventbrite_api_tickets']['min'] = array(
    'title' => t('Minimum purchase'),
    'help' => t('The minimum number of tickets to be purchased.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  // Expose the ticket maximum purchase.
  $data['eventbrite_api_tickets']['max'] = array(
    'title' => t('Maximum purchase'),
    'help' => t('The maximum number of tickets to be purchased.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  // Expose the ticket price.
  $data['eventbrite_api_tickets']['price'] = array(
    'title' => t('Price'),
    'help' => t('The price of the ticket.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
      'float' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  // Expose the quantity sold.
  $data['eventbrite_api_tickets']['quantity_sold'] = array(
    'title' => t('Quantity sold'),
    'help' => t('The quantity of tickets sold.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  // Expose the visibility.
  $data['eventbrite_api_tickets']['visible'] = array(
    'title' => t('Visible'),
    'help' => t('The visibility of the ticket.'),
    'field' => array(
      'handler' => 'views_handler_field_boolean',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_boolean_operator',
      'type' => 'yes-no',
      'use equal' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  // Expose the ticket currency.
  $data['eventbrite_api_tickets']['currency'] = array(
    'title' => t('Currency'),
    'help' => t('The currency of the ticket.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // Expose the quantity available.
  $data['eventbrite_api_tickets']['quantity_available'] = array(
    'title' => t('Quantity available'),
    'help' => t('The quantity of tickets available.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  // Expose the ticket display price.
  $data['eventbrite_api_tickets']['display_price'] = array(
    'title' => t('Display price'),
    'help' => t('The display price of the ticket.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
      'float' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  // Expose links to operate on the ticket.
  $data['eventbrite_api_tickets']['edit_ticket'] = array(
    'field' => array(
      'title' => t('Edit link'),
      'help' => t('Provide a simple link to the edit ticket page.'),
      'handler' => 'eventbrite_api_handler_field_ticket_link_edit',
    ),
  );

  // Expose links to operate on the ticket.
  $data['eventbrite_api_tickets']['clone_ticket'] = array(
    'field' => array(
      'title' => t('Clone link'),
      'help' => t('Provide a simple link to the clone ticket page.'),
      'handler' => 'eventbrite_api_handler_field_ticket_link_clone',
    ),
  );

  // Expose links to operate on the ticket.
  $data['eventbrite_api_tickets']['clone_other'] = array(
    'field' => array(
      'title' => t('Clone to other event'),
      'help' => t('Provide a simple link to the clone ticket to other event page.'),
      'handler' => 'eventbrite_api_handler_field_ticket_link_clone_other',
    ),
  );

  /**
   * Integrate the venues table.
   */
  $data['eventbrite_api_venues']['table']['group']  = t('Eventbrite venue');
  $data['eventbrite_api_venues']['table']['entity type'] = 'venue';

  $data['eventbrite_api_venues']['table']['base'] = array(
    'field' => 'vid',
    'title' => t('Eventbrite Venues'),
    'help' => t('Venues for Eventbrite events.'),
    'defaults' => array(
      'field' => 'name',
    ),
  );

  // Expose the venue ID.
  $data['eventbrite_api_venues']['vid'] = array(
    'title' => t('Venue ID'),
    'help' => t('The unique internal identifier of the event venue.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  // Expose the venue city.
  $data['eventbrite_api_venues']['city'] = array(
    'title' => t('City'),
    'help' => t('The city of the venue.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // Expose the venue name.
  $data['eventbrite_api_venues']['name'] = array(
    'title' => t('Name'),
    'help' => t('The name of the venue.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // Expose the venue country.
  $data['eventbrite_api_venues']['country'] = array(
    'title' => t('Country'),
    'help' => t('The country of the venue.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // Expose the venue region.
  $data['eventbrite_api_venues']['region'] = array(
    'title' => t('Region'),
    'help' => t('The region of the venue.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // Expose the venue address.
  $data['eventbrite_api_venues']['address'] = array(
    'title' => t('Address'),
    'help' => t('The address of the venue.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // Expose the venue address_2.
  $data['eventbrite_api_venues']['address_2'] = array(
    'title' => t('Address 2'),
    'help' => t('The address 2 of the venue.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // Expose the venue postal code.
  $data['eventbrite_api_venues']['postal_code'] = array(
    'title' => t('Postal code'),
    'help' => t('The postal code of the venue.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // Expose the venue country code.
  $data['eventbrite_api_venues']['country_code'] = array(
    'title' => t('Country code'),
    'help' => t('The country code of the venue.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // Expose the venue longitude.
  $data['eventbrite_api_venues']['longitude'] = array(
    'title' => t('Longitude'),
    'help' => t('The longitude of the venue.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
      'float' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  // Expose the venue latitude.
  $data['eventbrite_api_venues']['latitude'] = array(
    'title' => t('Latitude'),
    'help' => t('The latitude of the venue.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
      'float' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  // Expose the lat/long.
  $data['eventbrite_api_venues']['lat_long'] = array(
    'title' => t('Latitude/longitude'),
    'help' => t('The latitude/longitude of the venue.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // Expose links to operate on the venue.
  $data['eventbrite_api_venues']['edit_venue'] = array(
    'field' => array(
      'title' => t('Edit link'),
      'help' => t('Provide a simple link to the edit venue page.'),
      'handler' => 'eventbrite_api_handler_field_venue_link_edit',
    ),
  );

  return $data;

}
